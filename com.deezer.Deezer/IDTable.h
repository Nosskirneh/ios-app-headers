//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDWidget.h"

#import "IDFocusable-Protocol.h"

@class IDModel, IDView, NSMutableDictionary, NSString, NSTimer;
@protocol IDTableDelegate;

@interface IDTable : IDWidget <IDFocusable>
{
    _Bool _targetHmiStateIdDirty;
    _Bool _columnWidthsDirty;
    _Bool _tableCutTypeDirty;
    _Bool _tableDirty;
    _Bool _selectedRowDirty;
    int _selectedRow;
    id <IDTableDelegate> _delegate;
    IDView *_targetView;
    IDModel *_tableModel;
    long long _actionId;
    long long _focusActionId;
    IDModel *_targetModel;
    long long _targetHmiStateId;
    NSString *_columnWidthsString;
    unsigned long long _tableCutType;
    long long _rows;
    long long _cols;
    NSMutableDictionary *_cells;
    NSTimer *_timer;
}

@property _Bool selectedRowDirty; // @synthesize selectedRowDirty=_selectedRowDirty;
@property int selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property _Bool tableDirty; // @synthesize tableDirty=_tableDirty;
@property(retain) NSMutableDictionary *cells; // @synthesize cells=_cells;
@property long long cols; // @synthesize cols=_cols;
@property long long rows; // @synthesize rows=_rows;
@property _Bool tableCutTypeDirty; // @synthesize tableCutTypeDirty=_tableCutTypeDirty;
@property unsigned long long tableCutType; // @synthesize tableCutType=_tableCutType;
@property _Bool columnWidthsDirty; // @synthesize columnWidthsDirty=_columnWidthsDirty;
@property(retain) NSString *columnWidthsString; // @synthesize columnWidthsString=_columnWidthsString;
@property _Bool targetHmiStateIdDirty; // @synthesize targetHmiStateIdDirty=_targetHmiStateIdDirty;
@property long long targetHmiStateId; // @synthesize targetHmiStateId=_targetHmiStateId;
@property(readonly) IDModel *targetModel; // @synthesize targetModel=_targetModel;
@property long long focusActionId; // @synthesize focusActionId=_focusActionId;
@property long long actionId; // @synthesize actionId=_actionId;
@property(readonly, nonatomic) IDModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) IDView *targetView; // @synthesize targetView=_targetView;
@property __weak id <IDTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1;
- (void)focus;
- (void)flushTarget;
- (void)flushTableCells:(int)arg1;
- (void)flushTableContent:(int)arg1;
- (void)flush:(int)arg1;
- (void)setCutType:(unsigned long long)arg1;
- (void)setColumnWidths:(id)arg1;
- (void)setCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)setRowCount:(long long)arg1 columnCount:(long long)arg2;
- (void)removeAllCells;
- (void)focusRow:(int)arg1;
- (void)hmiDidStopForApplication:(id)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(long long)arg1;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 targetModel:(id)arg3 actionId:(long long)arg4 focusId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 tableModel:(id)arg2 targetModel:(id)arg3 actionId:(long long)arg4 focusId:(long long)arg5;
- (void)sendEmptyTable;
- (void)setNeedsFlush;
- (void)rowFocused:(id)arg1;
- (void)rowSelected:(id)arg1;
- (void)flushFromColumn:(long long)arg1 countOfColumns:(long long)arg2 fromRow:(long long)arg3 countOfRows:(long long)arg4;
- (void)flushColumns:(id)arg1 fromRow:(long long)arg2 countOfRows:(long long)arg3;
- (id)columnNumbersNeedsFlushForSpeed:(int)arg1 inRow:(long long)arg2;

@end

