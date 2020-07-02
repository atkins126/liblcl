
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function TrackBar_Create(AOwner: TComponent): TTrackBar; extdecl;
begin
  handleExceptionBegin
  Result :=  TTrackBar.Create(AOwner);
  handleExceptionEnd
end;

procedure TrackBar_Free(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

procedure TrackBar_SetTick(AObj: TTrackBar; Value: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetTick(Value);
  handleExceptionEnd
end;

function TrackBar_CanFocus(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CanFocus;
  handleExceptionEnd
end;

function TrackBar_ContainsControl(AObj: TTrackBar; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ContainsControl(Control);
  handleExceptionEnd
end;

function TrackBar_ControlAtPos(AObj: TTrackBar; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
  handleExceptionEnd
end;

procedure TrackBar_DisableAlign(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.DisableAlign;
  handleExceptionEnd
end;

procedure TrackBar_EnableAlign(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.EnableAlign;
  handleExceptionEnd
end;

function TrackBar_FindChildControl(AObj: TTrackBar; ControlName: PChar): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindChildControl(ControlName);
  handleExceptionEnd
end;

procedure TrackBar_FlipChildren(AObj: TTrackBar; AllLevels: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.FlipChildren(AllLevels);
  handleExceptionEnd
end;

function TrackBar_Focused(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Focused;
  handleExceptionEnd
end;

function TrackBar_HandleAllocated(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HandleAllocated;
  handleExceptionEnd
end;

procedure TrackBar_InsertControl(AObj: TTrackBar; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.InsertControl(AControl);
  handleExceptionEnd
end;

procedure TrackBar_Invalidate(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Invalidate;
  handleExceptionEnd
end;

procedure TrackBar_RemoveControl(AObj: TTrackBar; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.RemoveControl(AControl);
  handleExceptionEnd
end;

procedure TrackBar_Realign(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Realign;
  handleExceptionEnd
end;

procedure TrackBar_Repaint(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Repaint;
  handleExceptionEnd
end;

procedure TrackBar_ScaleBy(AObj: TTrackBar; M: Integer; D: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScaleBy(M, D);
  handleExceptionEnd
end;

procedure TrackBar_ScrollBy(AObj: TTrackBar; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollBy(DeltaX, DeltaY);
  handleExceptionEnd
end;

procedure TrackBar_SetBounds(AObj: TTrackBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
  handleExceptionEnd
end;

procedure TrackBar_SetFocus(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocus;
  handleExceptionEnd
end;

procedure TrackBar_Update(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Update;
  handleExceptionEnd
end;

procedure TrackBar_BringToFront(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.BringToFront;
  handleExceptionEnd
end;

procedure TrackBar_ClientToScreen(AObj: TTrackBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToScreen(Point);
  handleExceptionEnd
end;

procedure TrackBar_ClientToParent(AObj: TTrackBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientToParent(Point, AParent);
  handleExceptionEnd
end;

function TrackBar_Dragging(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Dragging;
  handleExceptionEnd
end;

function TrackBar_HasParent(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.HasParent;
  handleExceptionEnd
end;

procedure TrackBar_Hide(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Hide;
  handleExceptionEnd
end;

function TrackBar_Perform(AObj: TTrackBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Perform(Msg, WParam, LParam);
  handleExceptionEnd
end;

procedure TrackBar_Refresh(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Refresh;
  handleExceptionEnd
end;

procedure TrackBar_ScreenToClient(AObj: TTrackBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ScreenToClient(Point);
  handleExceptionEnd
end;

procedure TrackBar_ParentToClient(AObj: TTrackBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentToClient(Point, AParent);
  handleExceptionEnd
end;

procedure TrackBar_SendToBack(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.SendToBack;
  handleExceptionEnd
end;

procedure TrackBar_Show(AObj: TTrackBar); extdecl;
begin
  handleExceptionBegin
  AObj.Show;
  handleExceptionEnd
end;

function TrackBar_GetTextBuf(AObj: TTrackBar; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
  handleExceptionEnd
end;

function TrackBar_GetTextLen(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  {$ifdef darwin}Length(AObj.Caption){$else}AObj.GetTextLen{$endif};
  handleExceptionEnd
end;

procedure TrackBar_SetTextBuf(AObj: TTrackBar; Buffer: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetTextBuf(Buffer);
  handleExceptionEnd
end;

function TrackBar_FindComponent(AObj: TTrackBar; AName: PChar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindComponent(AName);
  handleExceptionEnd
end;

function TrackBar_GetNamePath(AObj: TTrackBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

procedure TrackBar_Assign(AObj: TTrackBar; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function TrackBar_ClassType(AObj: TTrackBar): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function TrackBar_ClassName(AObj: TTrackBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function TrackBar_InstanceSize(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function TrackBar_InheritsFrom(AObj: TTrackBar; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function TrackBar_Equals(AObj: TTrackBar; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function TrackBar_GetHashCode(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function TrackBar_ToString(AObj: TTrackBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

procedure TrackBar_AnchorToNeighbour(AObj: TTrackBar; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorToNeighbour(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure TrackBar_AnchorParallel(AObj: TTrackBar; ASide: TAnchorKind; ASpace: Integer; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorParallel(ASide, ASpace, ASibling);
  handleExceptionEnd
end;

procedure TrackBar_AnchorHorizontalCenterTo(AObj: TTrackBar; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorHorizontalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure TrackBar_AnchorVerticalCenterTo(AObj: TTrackBar; ASibling: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorVerticalCenterTo(ASibling);
  handleExceptionEnd
end;

procedure TrackBar_AnchorAsAlign(AObj: TTrackBar; ATheAlign: TAlign; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorAsAlign(ATheAlign, ASpace);
  handleExceptionEnd
end;

procedure TrackBar_AnchorClient(AObj: TTrackBar; ASpace: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorClient(ASpace);
  handleExceptionEnd
end;

function TrackBar_GetAlign(AObj: TTrackBar): TAlign; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Align;
  handleExceptionEnd
end;

procedure TrackBar_SetAlign(AObj: TTrackBar; AValue: TAlign); extdecl;
begin
  handleExceptionBegin
  AObj.Align := AValue;
  handleExceptionEnd
end;

function TrackBar_GetAnchors(AObj: TTrackBar): TAnchors; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Anchors;
  handleExceptionEnd
end;

procedure TrackBar_SetAnchors(AObj: TTrackBar; AValue: TAnchors); extdecl;
begin
  handleExceptionBegin
  AObj.Anchors := AValue;
  handleExceptionEnd
end;

function TrackBar_GetBorderWidth(AObj: TTrackBar): TBorderWidth; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderWidth;
  handleExceptionEnd
end;

procedure TrackBar_SetBorderWidth(AObj: TTrackBar; AValue: TBorderWidth); extdecl;
begin
  handleExceptionBegin
  AObj.BorderWidth := AValue;
  handleExceptionEnd
end;

function TrackBar_GetDoubleBuffered(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DoubleBuffered;
  handleExceptionEnd
end;

procedure TrackBar_SetDoubleBuffered(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DoubleBuffered := AValue;
  handleExceptionEnd
end;

function TrackBar_GetDragCursor(AObj: TTrackBar): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragCursor;
  handleExceptionEnd
end;

procedure TrackBar_SetDragCursor(AObj: TTrackBar; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.DragCursor := AValue;
  handleExceptionEnd
end;

function TrackBar_GetDragMode(AObj: TTrackBar): TDragMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DragMode;
  handleExceptionEnd
end;

procedure TrackBar_SetDragMode(AObj: TTrackBar; AValue: TDragMode); extdecl;
begin
  handleExceptionBegin
  AObj.DragMode := AValue;
  handleExceptionEnd
end;

function TrackBar_GetEnabled(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Enabled;
  handleExceptionEnd
end;

procedure TrackBar_SetEnabled(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Enabled := AValue;
  handleExceptionEnd
end;

function TrackBar_GetConstraints(AObj: TTrackBar): TSizeConstraints; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Constraints;
  handleExceptionEnd
end;

procedure TrackBar_SetConstraints(AObj: TTrackBar; AValue: TSizeConstraints); extdecl;
begin
  handleExceptionBegin
  AObj.Constraints := AValue;
  handleExceptionEnd
end;

function TrackBar_GetLineSize(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.LineSize;
  handleExceptionEnd
end;

procedure TrackBar_SetLineSize(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.LineSize := AValue;
  handleExceptionEnd
end;

function TrackBar_GetMax(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Max;
  handleExceptionEnd
end;

procedure TrackBar_SetMax(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Max := AValue;
  handleExceptionEnd
end;

function TrackBar_GetMin(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Min;
  handleExceptionEnd
end;

procedure TrackBar_SetMin(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Min := AValue;
  handleExceptionEnd
end;

function TrackBar_GetOrientation(AObj: TTrackBar): TTrackBarOrientation; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Orientation;
  handleExceptionEnd
end;

procedure TrackBar_SetOrientation(AObj: TTrackBar; AValue: TTrackBarOrientation); extdecl;
begin
  handleExceptionBegin
  AObj.Orientation := AValue;
  handleExceptionEnd
end;

function TrackBar_GetParentDoubleBuffered(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentDoubleBuffered;
  handleExceptionEnd
end;

procedure TrackBar_SetParentDoubleBuffered(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentDoubleBuffered := AValue;
  handleExceptionEnd
end;

function TrackBar_GetParentShowHint(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentShowHint;
  handleExceptionEnd
end;

procedure TrackBar_SetParentShowHint(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ParentShowHint := AValue;
  handleExceptionEnd
end;

function TrackBar_GetPageSize(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PageSize;
  handleExceptionEnd
end;

procedure TrackBar_SetPageSize(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PageSize := AValue;
  handleExceptionEnd
end;

function TrackBar_GetPopupMenu(AObj: TTrackBar): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.PopupMenu;
  handleExceptionEnd
end;

procedure TrackBar_SetPopupMenu(AObj: TTrackBar; AValue: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopupMenu := AValue;
  handleExceptionEnd
end;

function TrackBar_GetFrequency(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Frequency;
  handleExceptionEnd
end;

procedure TrackBar_SetFrequency(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Frequency := AValue;
  handleExceptionEnd
end;

function TrackBar_GetPosition(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Position;
  handleExceptionEnd
end;

procedure TrackBar_SetPosition(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Position := AValue;
  handleExceptionEnd
end;

function TrackBar_GetSelEnd(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.SelEnd;
  handleExceptionEnd
end;

procedure TrackBar_SetSelEnd(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SelEnd := AValue;
  handleExceptionEnd
end;

function TrackBar_GetSelStart(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.SelStart;
  handleExceptionEnd
end;

procedure TrackBar_SetSelStart(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SelStart := AValue;
  handleExceptionEnd
end;

function TrackBar_GetShowHint(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowHint;
  handleExceptionEnd
end;

procedure TrackBar_SetShowHint(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowHint := AValue;
  handleExceptionEnd
end;

function TrackBar_GetShowSelRange(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ShowSelRange;
  handleExceptionEnd
end;

procedure TrackBar_SetShowSelRange(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.ShowSelRange := AValue;
  handleExceptionEnd
end;

function TrackBar_GetTabOrder(AObj: TTrackBar): TTabOrder; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabOrder;
  handleExceptionEnd
end;

procedure TrackBar_SetTabOrder(AObj: TTrackBar; AValue: TTabOrder); extdecl;
begin
  handleExceptionBegin
  AObj.TabOrder := AValue;
  handleExceptionEnd
end;

function TrackBar_GetTabStop(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TabStop;
  handleExceptionEnd
end;

procedure TrackBar_SetTabStop(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.TabStop := AValue;
  handleExceptionEnd
end;

function TrackBar_GetTickMarks(AObj: TTrackBar): TTickMark; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TickMarks;
  handleExceptionEnd
end;

procedure TrackBar_SetTickMarks(AObj: TTrackBar; AValue: TTickMark); extdecl;
begin
  handleExceptionBegin
  AObj.TickMarks := AValue;
  handleExceptionEnd
end;

function TrackBar_GetTickStyle(AObj: TTrackBar): TTickStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.TickStyle;
  handleExceptionEnd
end;

procedure TrackBar_SetTickStyle(AObj: TTrackBar; AValue: TTickStyle); extdecl;
begin
  handleExceptionBegin
  AObj.TickStyle := AValue;
  handleExceptionEnd
end;

function TrackBar_GetVisible(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Visible;
  handleExceptionEnd
end;

procedure TrackBar_SetVisible(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Visible := AValue;
  handleExceptionEnd
end;

//EVENT_TYPE:TContextPopupEvent
procedure TrackBar_SetOnContextPopup(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTContextPopupEvent_OnContextPopup}
  {$DEFINE EventName := OnContextPopup}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure TrackBar_SetOnChange(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnChange}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;

//EVENT_TYPE:TDragDropEvent
procedure TrackBar_SetOnDragDrop(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragDropEvent_OnDragDrop}
  {$DEFINE EventName := OnDragDrop}
  EventMethodCode
end;

//EVENT_TYPE:TDragOverEvent
procedure TrackBar_SetOnDragOver(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTDragOverEvent_OnDragOver}
  {$DEFINE EventName := OnDragOver}
  EventMethodCode
end;

//EVENT_TYPE:TEndDragEvent
procedure TrackBar_SetOnEndDrag(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTEndDragEvent_OnEndDrag}
  {$DEFINE EventName := OnEndDrag}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure TrackBar_SetOnEnter(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnEnter}
  {$DEFINE EventName := OnEnter}
  EventMethodCode
end;

//EVENT_TYPE:TNotifyEvent
procedure TrackBar_SetOnExit(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent_OnExit}
  {$DEFINE EventName := OnExit}
  EventMethodCode
end;

//EVENT_TYPE:TKeyEvent
procedure TrackBar_SetOnKeyDown(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent_OnKeyDown}
  {$DEFINE EventName := OnKeyDown}
  EventMethodCode
end;

//EVENT_TYPE:TKeyPressEvent
procedure TrackBar_SetOnKeyPress(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyPressEvent_OnKeyPress}
  {$DEFINE EventName := OnKeyPress}
  EventMethodCode
end;

//EVENT_TYPE:TKeyEvent
procedure TrackBar_SetOnKeyUp(AObj: TTrackBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventMethodName := OnTKeyEvent_OnKeyUp}
  {$DEFINE EventName := OnKeyUp}
  EventMethodCode
end;

function TrackBar_GetDockClientCount(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClientCount;
  handleExceptionEnd
end;

function TrackBar_GetDockSite(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockSite;
  handleExceptionEnd
end;

procedure TrackBar_SetDockSite(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.DockSite := AValue;
  handleExceptionEnd
end;

function TrackBar_GetMouseInClient(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.MouseInClient;
  handleExceptionEnd
end;

function TrackBar_GetVisibleDockClientCount(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.VisibleDockClientCount;
  handleExceptionEnd
end;

function TrackBar_GetBrush(AObj: TTrackBar): TBrush; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Brush;
  handleExceptionEnd
end;

function TrackBar_GetControlCount(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlCount;
  handleExceptionEnd
end;

function TrackBar_GetHandle(AObj: TTrackBar): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Handle;
  handleExceptionEnd
end;

function TrackBar_GetParentWindow(AObj: TTrackBar): HWND; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ParentWindow;
  handleExceptionEnd
end;

procedure TrackBar_SetParentWindow(AObj: TTrackBar; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.ParentWindow := AValue;
  handleExceptionEnd
end;

function TrackBar_GetShowing(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Showing;
  handleExceptionEnd
end;

function TrackBar_GetUseDockManager(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.UseDockManager;
  handleExceptionEnd
end;

procedure TrackBar_SetUseDockManager(AObj: TTrackBar; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.UseDockManager := AValue;
  handleExceptionEnd
end;

function TrackBar_GetAction(AObj: TTrackBar): TBasicAction; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Action;
  handleExceptionEnd
end;

procedure TrackBar_SetAction(AObj: TTrackBar; AValue: TBasicAction); extdecl;
begin
  handleExceptionBegin
  AObj.Action := AValue;
  handleExceptionEnd
end;

function TrackBar_GetBiDiMode(AObj: TTrackBar): TBiDiMode; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BiDiMode;
  handleExceptionEnd
end;

procedure TrackBar_SetBiDiMode(AObj: TTrackBar; AValue: TBiDiMode); extdecl;
begin
  handleExceptionBegin
  AObj.BiDiMode := AValue;
  handleExceptionEnd
end;

procedure TrackBar_GetBoundsRect(AObj: TTrackBar; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BoundsRect;
  handleExceptionEnd
end;

procedure TrackBar_SetBoundsRect(AObj: TTrackBar; var AValue: TRect); extdecl;
begin
  handleExceptionBegin
  AObj.BoundsRect := AValue;
  handleExceptionEnd
end;

function TrackBar_GetClientHeight(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientHeight;
  handleExceptionEnd
end;

procedure TrackBar_SetClientHeight(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientHeight := AValue;
  handleExceptionEnd
end;

procedure TrackBar_GetClientOrigin(AObj: TTrackBar; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientOrigin;
  handleExceptionEnd
end;

procedure TrackBar_GetClientRect(AObj: TTrackBar; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientRect;
  handleExceptionEnd
end;

function TrackBar_GetClientWidth(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClientWidth;
  handleExceptionEnd
end;

procedure TrackBar_SetClientWidth(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ClientWidth := AValue;
  handleExceptionEnd
end;

function TrackBar_GetControlState(AObj: TTrackBar): TControlState; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlState;
  handleExceptionEnd
end;

procedure TrackBar_SetControlState(AObj: TTrackBar; AValue: TControlState); extdecl;
begin
  handleExceptionBegin
  AObj.ControlState := AValue;
  handleExceptionEnd
end;

function TrackBar_GetControlStyle(AObj: TTrackBar): TControlStyle; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ControlStyle;
  handleExceptionEnd
end;

procedure TrackBar_SetControlStyle(AObj: TTrackBar; AValue: TControlStyle); extdecl;
begin
  handleExceptionBegin
  AObj.ControlStyle := AValue;
  handleExceptionEnd
end;

function TrackBar_GetFloating(AObj: TTrackBar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Floating;
  handleExceptionEnd
end;

function TrackBar_GetParent(AObj: TTrackBar): TWinControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Parent;
  handleExceptionEnd
end;

procedure TrackBar_SetParent(AObj: TTrackBar; AValue: TWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.Parent := AValue;
  handleExceptionEnd
end;

function TrackBar_GetLeft(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Left;
  handleExceptionEnd
end;

procedure TrackBar_SetLeft(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Left := AValue;
  handleExceptionEnd
end;

function TrackBar_GetTop(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Top;
  handleExceptionEnd
end;

procedure TrackBar_SetTop(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Top := AValue;
  handleExceptionEnd
end;

function TrackBar_GetWidth(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Width;
  handleExceptionEnd
end;

procedure TrackBar_SetWidth(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Width := AValue;
  handleExceptionEnd
end;

function TrackBar_GetHeight(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Height;
  handleExceptionEnd
end;

procedure TrackBar_SetHeight(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Height := AValue;
  handleExceptionEnd
end;

function TrackBar_GetCursor(AObj: TTrackBar): TCursor; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Cursor;
  handleExceptionEnd
end;

procedure TrackBar_SetCursor(AObj: TTrackBar; AValue: TCursor); extdecl;
begin
  handleExceptionBegin
  AObj.Cursor := AValue;
  handleExceptionEnd
end;

function TrackBar_GetHint(AObj: TTrackBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Hint);
  handleExceptionEnd
end;

procedure TrackBar_SetHint(AObj: TTrackBar; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Hint := AValue;
  handleExceptionEnd
end;

function TrackBar_GetComponentCount(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentCount;
  handleExceptionEnd
end;

function TrackBar_GetComponentIndex(AObj: TTrackBar): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ComponentIndex;
  handleExceptionEnd
end;

procedure TrackBar_SetComponentIndex(AObj: TTrackBar; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.ComponentIndex := AValue;
  handleExceptionEnd
end;

function TrackBar_GetOwner(AObj: TTrackBar): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function TrackBar_GetName(AObj: TTrackBar): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Name);
  handleExceptionEnd
end;

procedure TrackBar_SetName(AObj: TTrackBar; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Name := AValue;
  handleExceptionEnd
end;

function TrackBar_GetTag(AObj: TTrackBar): NativeInt; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Tag;
  handleExceptionEnd
end;

procedure TrackBar_SetTag(AObj: TTrackBar; AValue: NativeInt); extdecl;
begin
  handleExceptionBegin
  AObj.Tag := AValue;
  handleExceptionEnd
end;

function TrackBar_GetAnchorSideLeft(AObj: TTrackBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideLeft;
  handleExceptionEnd
end;

procedure TrackBar_SetAnchorSideLeft(AObj: TTrackBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideLeft := AValue;
  handleExceptionEnd
end;

function TrackBar_GetAnchorSideTop(AObj: TTrackBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideTop;
  handleExceptionEnd
end;

procedure TrackBar_SetAnchorSideTop(AObj: TTrackBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideTop := AValue;
  handleExceptionEnd
end;

function TrackBar_GetAnchorSideRight(AObj: TTrackBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideRight;
  handleExceptionEnd
end;

procedure TrackBar_SetAnchorSideRight(AObj: TTrackBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideRight := AValue;
  handleExceptionEnd
end;

function TrackBar_GetAnchorSideBottom(AObj: TTrackBar): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSideBottom;
  handleExceptionEnd
end;

procedure TrackBar_SetAnchorSideBottom(AObj: TTrackBar; AValue: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSideBottom := AValue;
  handleExceptionEnd
end;

function TrackBar_GetChildSizing(AObj: TTrackBar): TControlChildSizing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ChildSizing;
  handleExceptionEnd
end;

procedure TrackBar_SetChildSizing(AObj: TTrackBar; AValue: TControlChildSizing); extdecl;
begin
  handleExceptionBegin
  AObj.ChildSizing := AValue;
  handleExceptionEnd
end;

function TrackBar_GetBorderSpacing(AObj: TTrackBar): TControlBorderSpacing; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.BorderSpacing;
  handleExceptionEnd
end;

procedure TrackBar_SetBorderSpacing(AObj: TTrackBar; AValue: TControlBorderSpacing); extdecl;
begin
  handleExceptionBegin
  AObj.BorderSpacing := AValue;
  handleExceptionEnd
end;

function TrackBar_GetDockClients(AObj: TTrackBar; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.DockClients[Index];
  handleExceptionEnd
end;

function TrackBar_GetControls(AObj: TTrackBar; Index: Integer): TControl; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Controls[Index];
  handleExceptionEnd
end;

function TrackBar_GetComponents(AObj: TTrackBar; AIndex: Integer): TComponent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Components[AIndex];
  handleExceptionEnd
end;

function TrackBar_GetAnchorSide(AObj: TTrackBar; AKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.AnchorSide[AKind];
  handleExceptionEnd
end;

function TrackBar_StaticClassType: TClass; extdecl;
begin
  Result := TTrackBar;
end;

exports
  TrackBar_Create,
  TrackBar_Free,
  TrackBar_SetTick,
  TrackBar_CanFocus,
  TrackBar_ContainsControl,
  TrackBar_ControlAtPos,
  TrackBar_DisableAlign,
  TrackBar_EnableAlign,
  TrackBar_FindChildControl,
  TrackBar_FlipChildren,
  TrackBar_Focused,
  TrackBar_HandleAllocated,
  TrackBar_InsertControl,
  TrackBar_Invalidate,
  TrackBar_RemoveControl,
  TrackBar_Realign,
  TrackBar_Repaint,
  TrackBar_ScaleBy,
  TrackBar_ScrollBy,
  TrackBar_SetBounds,
  TrackBar_SetFocus,
  TrackBar_Update,
  TrackBar_BringToFront,
  TrackBar_ClientToScreen,
  TrackBar_ClientToParent,
  TrackBar_Dragging,
  TrackBar_HasParent,
  TrackBar_Hide,
  TrackBar_Perform,
  TrackBar_Refresh,
  TrackBar_ScreenToClient,
  TrackBar_ParentToClient,
  TrackBar_SendToBack,
  TrackBar_Show,
  TrackBar_GetTextBuf,
  TrackBar_GetTextLen,
  TrackBar_SetTextBuf,
  TrackBar_FindComponent,
  TrackBar_GetNamePath,
  TrackBar_Assign,
  TrackBar_ClassType,
  TrackBar_ClassName,
  TrackBar_InstanceSize,
  TrackBar_InheritsFrom,
  TrackBar_Equals,
  TrackBar_GetHashCode,
  TrackBar_ToString,
  TrackBar_AnchorToNeighbour,
  TrackBar_AnchorParallel,
  TrackBar_AnchorHorizontalCenterTo,
  TrackBar_AnchorVerticalCenterTo,
  TrackBar_AnchorAsAlign,
  TrackBar_AnchorClient,
  TrackBar_GetAlign,
  TrackBar_SetAlign,
  TrackBar_GetAnchors,
  TrackBar_SetAnchors,
  TrackBar_GetBorderWidth,
  TrackBar_SetBorderWidth,
  TrackBar_GetDoubleBuffered,
  TrackBar_SetDoubleBuffered,
  TrackBar_GetDragCursor,
  TrackBar_SetDragCursor,
  TrackBar_GetDragMode,
  TrackBar_SetDragMode,
  TrackBar_GetEnabled,
  TrackBar_SetEnabled,
  TrackBar_GetConstraints,
  TrackBar_SetConstraints,
  TrackBar_GetLineSize,
  TrackBar_SetLineSize,
  TrackBar_GetMax,
  TrackBar_SetMax,
  TrackBar_GetMin,
  TrackBar_SetMin,
  TrackBar_GetOrientation,
  TrackBar_SetOrientation,
  TrackBar_GetParentDoubleBuffered,
  TrackBar_SetParentDoubleBuffered,
  TrackBar_GetParentShowHint,
  TrackBar_SetParentShowHint,
  TrackBar_GetPageSize,
  TrackBar_SetPageSize,
  TrackBar_GetPopupMenu,
  TrackBar_SetPopupMenu,
  TrackBar_GetFrequency,
  TrackBar_SetFrequency,
  TrackBar_GetPosition,
  TrackBar_SetPosition,
  TrackBar_GetSelEnd,
  TrackBar_SetSelEnd,
  TrackBar_GetSelStart,
  TrackBar_SetSelStart,
  TrackBar_GetShowHint,
  TrackBar_SetShowHint,
  TrackBar_GetShowSelRange,
  TrackBar_SetShowSelRange,
  TrackBar_GetTabOrder,
  TrackBar_SetTabOrder,
  TrackBar_GetTabStop,
  TrackBar_SetTabStop,
  TrackBar_GetTickMarks,
  TrackBar_SetTickMarks,
  TrackBar_GetTickStyle,
  TrackBar_SetTickStyle,
  TrackBar_GetVisible,
  TrackBar_SetVisible,
  TrackBar_SetOnContextPopup,
  TrackBar_SetOnChange,
  TrackBar_SetOnDragDrop,
  TrackBar_SetOnDragOver,
  TrackBar_SetOnEndDrag,
  TrackBar_SetOnEnter,
  TrackBar_SetOnExit,
  TrackBar_SetOnKeyDown,
  TrackBar_SetOnKeyPress,
  TrackBar_SetOnKeyUp,
  TrackBar_GetDockClientCount,
  TrackBar_GetDockSite,
  TrackBar_SetDockSite,
  TrackBar_GetMouseInClient,
  TrackBar_GetVisibleDockClientCount,
  TrackBar_GetBrush,
  TrackBar_GetControlCount,
  TrackBar_GetHandle,
  TrackBar_GetParentWindow,
  TrackBar_SetParentWindow,
  TrackBar_GetShowing,
  TrackBar_GetUseDockManager,
  TrackBar_SetUseDockManager,
  TrackBar_GetAction,
  TrackBar_SetAction,
  TrackBar_GetBiDiMode,
  TrackBar_SetBiDiMode,
  TrackBar_GetBoundsRect,
  TrackBar_SetBoundsRect,
  TrackBar_GetClientHeight,
  TrackBar_SetClientHeight,
  TrackBar_GetClientOrigin,
  TrackBar_GetClientRect,
  TrackBar_GetClientWidth,
  TrackBar_SetClientWidth,
  TrackBar_GetControlState,
  TrackBar_SetControlState,
  TrackBar_GetControlStyle,
  TrackBar_SetControlStyle,
  TrackBar_GetFloating,
  TrackBar_GetParent,
  TrackBar_SetParent,
  TrackBar_GetLeft,
  TrackBar_SetLeft,
  TrackBar_GetTop,
  TrackBar_SetTop,
  TrackBar_GetWidth,
  TrackBar_SetWidth,
  TrackBar_GetHeight,
  TrackBar_SetHeight,
  TrackBar_GetCursor,
  TrackBar_SetCursor,
  TrackBar_GetHint,
  TrackBar_SetHint,
  TrackBar_GetComponentCount,
  TrackBar_GetComponentIndex,
  TrackBar_SetComponentIndex,
  TrackBar_GetOwner,
  TrackBar_GetName,
  TrackBar_SetName,
  TrackBar_GetTag,
  TrackBar_SetTag,
  TrackBar_GetAnchorSideLeft,
  TrackBar_SetAnchorSideLeft,
  TrackBar_GetAnchorSideTop,
  TrackBar_SetAnchorSideTop,
  TrackBar_GetAnchorSideRight,
  TrackBar_SetAnchorSideRight,
  TrackBar_GetAnchorSideBottom,
  TrackBar_SetAnchorSideBottom,
  TrackBar_GetChildSizing,
  TrackBar_SetChildSizing,
  TrackBar_GetBorderSpacing,
  TrackBar_SetBorderSpacing,
  TrackBar_GetDockClients,
  TrackBar_GetControls,
  TrackBar_GetComponents,
  TrackBar_GetAnchorSide,
  TrackBar_StaticClassType;
