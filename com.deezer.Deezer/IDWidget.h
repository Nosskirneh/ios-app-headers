//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFlushProtocol-Protocol.h"
#import "IDFocusable-Protocol.h"

@class IDView;

@interface IDWidget : NSObject <IDFocusable, IDFlushProtocol>
{
    _Bool _visible;
    _Bool _visibleDirty;
    _Bool _enabled;
    _Bool _selectable;
    _Bool _enabledDirty;
    _Bool _selectableDirty;
    _Bool _focusDirty;
    IDView *_view;
    long long _widgetId;
}

+ (id)new;
@property _Bool focusDirty; // @synthesize focusDirty=_focusDirty;
@property _Bool selectableDirty; // @synthesize selectableDirty=_selectableDirty;
@property _Bool enabledDirty; // @synthesize enabledDirty=_enabledDirty;
@property _Bool visibleDirty; // @synthesize visibleDirty=_visibleDirty;
@property long long widgetId; // @synthesize widgetId=_widgetId;
@property IDView *view; // @synthesize view=_view;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)setNeedsFlush;
- (void)flush:(int)arg1;
- (int)priority;
- (void)hmiDidStopForApplication:(id)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (void)focus;
- (id)init;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2;
- (id)initWithWidgetId:(long long)arg1;

@end

