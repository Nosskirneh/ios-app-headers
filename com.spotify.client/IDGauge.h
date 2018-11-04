//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDPreviewableWidget.h"

#import "IDFocusable.h"
#import "IDHmiActionDelegate.h"

@class IDHmiAction, IDModel, IDProperty, NSString;

@interface IDGauge : IDPreviewableWidget <IDHmiActionDelegate, IDFocusable>
{
    long long _width;
    IDModel *_textModel;
    IDProperty *_positionXProperty;
    IDProperty *_positionYProperty;
    IDProperty *_widthProperty;
    IDModel *_valueModel;
    IDHmiAction *_selectAction;
    IDHmiAction *_changeAction;
    struct CGPoint _position;
}

@property(readonly, nonatomic) IDHmiAction *changeAction; // @synthesize changeAction=_changeAction;
@property(readonly, nonatomic) IDHmiAction *selectAction; // @synthesize selectAction=_selectAction;
@property(readonly, nonatomic) IDModel *valueModel; // @synthesize valueModel=_valueModel;
@property(readonly, nonatomic) IDProperty *widthProperty; // @synthesize widthProperty=_widthProperty;
@property(readonly, nonatomic) IDProperty *positionYProperty; // @synthesize positionYProperty=_positionYProperty;
@property(readonly, nonatomic) IDProperty *positionXProperty; // @synthesize positionXProperty=_positionXProperty;
@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)handleAction:(id)arg1 info:(id)arg2;
@property(nonatomic) long long textId;
@property(copy, nonatomic) NSString *text;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 textModel:(id)arg3 actionId:(long long)arg4 changeActionId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 valueModel:(id)arg2 textModel:(id)arg3 actionId:(long long)arg4 changeActionId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 valueModel:(id)arg2 textModel:(id)arg3 previewModel:(id)arg4 selectAction:(id)arg5 changeAction:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

