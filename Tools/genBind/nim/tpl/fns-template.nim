#[
   The code is automatically generated by the genBind tool.
   Author: ying32
   https://github.com/ying32
]#
{.experimental: "codeReordering".}
##
##
import liblcl, vcl, types, strutils
##

##
proc ShowMessageFmt*(formatstr: string, a: varargs[string, `$`]) =
  ShowMessage(strutils.format(formatstr, a))
##
proc GetFPStringArrayMember*(p: pointer, index: int): string =
  return $DGetStringArrOf(p, index)
##
proc SelectDirectory*(Directory: var string, Options: TSelectDirOpts, HelpCtx: int32): bool =
  var ps1: cstring = Directory
  result = DSelectDirectory1(ps1, Options, HelpCtx)
  if result:
    Directory = $ps1
##
proc SelectDirectory*(Caption: string, Root: string, AShowHidden: bool, Directory: var string): bool =
  var ps4: cstring = Directory
  result = DSelectDirectory2(Caption, Root, AShowHidden, ps4)
  if result:
    Directory = $ps4
##
proc InputQuery*(ACaption: string, APrompt: string, Value: string, AOut: var string): bool =
  var ps4: cstring = AOut
  result = DInputQuery(ACaption, APrompt, Value, ps4)
  if result:
    AOut = $ps4
##
proc GetLibResourceItem*(AIndex: int32): TResItem =
  DGetLibResourceItem(AIndex, result)
##
proc StringToGUID*(AGUIDStr: string): TGUID =
  DStringToGUID(AGUIDStr, result)
##
proc CreateGUID*(): TGUID =
  DCreateGUID(result)
##
when defined(linux):
  proc GdkWindow_GetXId*(AW: PGdkWindow): TXId =
    GdkWindow_GetXId(AW, result)
##
##


{{define "getFunc"}}
    {{$el := .}}
    {{$buff := newBuffer}}

    {{$isNotAll := ne .Platform "all"}}

    {{if eq $el.Platform "windows"}}
        {{$buff.Writeln "when defined(windows):"}}
    {{else if eq $el.Platform "linux,macos"}}
        {{$buff.Writeln "when not defined(windows):"}}
    {{else if eq $el.Platform "macos"}}
        {{$buff.Writeln "when defined(macosx):"}}
    {{else if eq $el.Platform "linux"}}
        {{$buff.Writeln "when defined(linux):"}}
    {{end}}
    {{if $isNotAll}}
        {{$buff.Write "  "}}
    {{end}}

    {{$buff.Write "proc " (delDChar $el.Name) "*("}}
    {{range $idx, $ps := .Params}}
        {{if gt $idx 0}}
            {{$buff.Write ", "}}
        {{end}}
        {{$buff.Write $ps.Name ": "}}
        {{if $ps.IsVar}}
            {{if ne $ps.Flag "nonPtr"}}
                {{$buff.Write "var "}}
            {{end}}
        {{end}}
        {{covType2 $ps.Type|$buff.Write}}
    {{end}}

    {{$buff.Write ")"}}
    {{if not (isEmpty $el.Return)}}
        {{$buff.Write ": " (covType2 $el.Return)}}
    {{end}}
    {{$buff.Writeln " ="}}

    {{/*这里生成不需要var的变量*/}}
    {{range $ips, $ps := $el.Params}}
        {{if and ($ps.IsVar) (eq $ps.Flag "nonPtr")}}
            {{if $isNotAll}}
                {{$buff.Write "  "}}
            {{end}}
            {{$buff.Writeln "  var ps" $ips " = " $ps.Name}}
        {{end}}
    {{end}}

    {{$buff.Write "  "}}
    {{if $isNotAll}}
        {{$buff.Write "  "}}
    {{end}}
    {{if not (isEmpty $el.Return)}}
        {{$buff.Write "return "}}
    {{end}}
    {{if eq $el.Return "string"}}
        {{$buff.Write "$"}}
    {{end}}
    {{$buff.Write $el.Name "("}}

    {{range $idx, $ps := .Params}}
        {{if gt $idx 0}}
            {{$buff.Write ", "}}
        {{end}}
        {{$lIsObj := isObject $ps.Type}}
        {{if $lIsObj}}
            {{$buff.Write "CheckPtr("}}
        {{end}}
        {{if ne $ps.Flag "nonPtr"}}
            {{$buff.Write $ps.Name}}
        {{else}}
            {{$buff.Write "ps" $idx}}
        {{end}}
        {{if $lIsObj}}
            {{$buff.Write ")"}}
        {{end}}
    {{end}}

    {{$buff.Write ")"}}
    {{if isObject $el.Return}}
        {{$buff.Write ".As" (rmObjectT $el.Return)}}
    {{end}}

{{$buff.ToStr}}
{{end}}

{{/*执行模板*/}}
{{range $el := .Functions}}
    {{if not (inStrArray $el.Name "DGetStringArrOf" "DSynchronize" "DMove" "DStrLen" "SetEventCallback" "SetThreadSyncCallback" "SetMessageCallback" "DSelectDirectory2" "DSelectDirectory1" "DInputQuery" "GdkWindow_GetXId" "DCreateGUID" "DStringToGUID" "DStringToGUID" "DGetLibResourceItem")}}
        {{if not (contains $el.Name "_Instance")}}
      ##
            {{template "getFunc" $el}}
        {{end}}
    {{end}}
{{end}}