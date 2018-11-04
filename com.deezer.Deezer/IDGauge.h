//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDWidget.h"

#import "IDFocusable-Protocol.h"

@class IDModel, NSString;

@interface IDGauge : IDWidget <IDFocusable>
{
    _Bool _widthDirty;
    _Bool _positionDirty;
    _Bool _textDirty;
    _Bool _textIdDirty;
    long long _width;
    NSString *_text;
    long long _textId;
    IDModel *_valueModel;
    long long _actionId;
    long long _changeActionId;
    IDModel *_textModel;
    struct CGPoint _position;
}

@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) _Bool textIdDirty; // @synthesize textIdDirty=_textIdDirty;
@property(nonatomic) _Bool textDirty; // @synthesize textDirty=_textDirty;
@property(nonatomic) _Bool positionDirty; // @synthesize positionDirty=_positionDirty;
@property(nonatomic) _Bool widthDirty; // @synthesize widthDirty=_widthDirty;
@property(nonatomic) long long changeActionId; // @synthesize changeActionId=_changeActionId;
@property(nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(readonly, nonatomic) IDModel *valueModel; // @synthesize valueModel=_valueModel;
@property(nonatomic) long long textId; // @synthesize textId=_textId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)flush:(int)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithWidgetId:(long long)arg1;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2 textModel:(id)arg3 actionId:(long long)arg4 changeActionId:(long long)arg5;
- (id)initWithWidgetId:(long long)arg1 valueModel:(id)arg2 textModel:(id)arg3 actionId:(long long)arg4 changeActionId:(long long)arg5;

@end

