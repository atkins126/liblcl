
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function DragObject_Create(AOwner: TControl): TDragObject; extdecl;
begin
  handleExceptionBegin
  Result :=  TDragObject.Create(AOwner);
  handleExceptionEnd
end;

procedure DragObject_Free(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure DragObject_Assign(AObj: TDragObject; Source: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

procedure DragObject_HideDragImage(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.HideDragImage;
  handleExceptionEnd
end;

procedure DragObject_ShowDragImage(AObj: TDragObject); extdecl;
begin
  handleExceptionBegin
  AObj.ShowDragImage;
  handleExceptionEnd
end;

function DragObject_ClassType(AObj: TDragObject): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function DragObject_ClassName(AObj: TDragObject): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function DragObject_InstanceSize(AObj: TDragObject): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function DragObject_InheritsFrom(AObj: TDragObject; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function DragObject_Equals(AObj: TDragObject; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function DragObject_GetHashCode(AObj: TDragObject): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function DragObject_ToString(AObj: TDragObject): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function DragObject_GetAlwaysShowDragImages(AObj: TDragObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AlwaysShowDragImages;
  handleExceptionEnd
end;

procedure DragObject_SetAlwaysShowDragImages(AObj: TDragObject; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.AlwaysShowDragImages := AValue;
  handleExceptionEnd
end;

procedure DragObject_GetDragPos(AObj: TDragObject; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragPos;
  handleExceptionEnd
end;

procedure DragObject_SetDragPos(AObj: TDragObject; var AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.DragPos := AValue;
  handleExceptionEnd
end;

function DragObject_GetDragTarget(AObj: TDragObject): Pointer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragTarget;
  handleExceptionEnd
end;

procedure DragObject_SetDragTarget(AObj: TDragObject; AValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.DragTarget := AValue;
  handleExceptionEnd
end;

procedure DragObject_GetDragTargetPos(AObj: TDragObject; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragTargetPos;
  handleExceptionEnd
end;

procedure DragObject_SetDragTargetPos(AObj: TDragObject; var AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.DragTargetPos := AValue;
  handleExceptionEnd
end;

function DragObject_GetDropped(AObj: TDragObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dropped;
  handleExceptionEnd
end;

function DragObject_StaticClassType: TClass; extdecl;
begin
  Result := TDragObject;
end;

exports
  DragObject_Create,
  DragObject_Free,
  DragObject_Assign,
  DragObject_HideDragImage,
  DragObject_ShowDragImage,
  DragObject_ClassType,
  DragObject_ClassName,
  DragObject_InstanceSize,
  DragObject_InheritsFrom,
  DragObject_Equals,
  DragObject_GetHashCode,
  DragObject_ToString,
  DragObject_GetAlwaysShowDragImages,
  DragObject_SetAlwaysShowDragImages,
  DragObject_GetDragPos,
  DragObject_SetDragPos,
  DragObject_GetDragTarget,
  DragObject_SetDragTarget,
  DragObject_GetDragTargetPos,
  DragObject_SetDragTargetPos,
  DragObject_GetDropped,
  DragObject_StaticClassType;
