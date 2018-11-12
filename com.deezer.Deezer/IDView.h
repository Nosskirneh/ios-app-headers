//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDFlushProtocol-Protocol.h"

@class IDApplication, IDModel, NSLock, NSMutableSet, NSString;
@protocol IDViewDelegate;

@interface IDView : NSObject <IDFlushProtocol>
{
    _Bool _focused;
    _Bool _visible;
    _Bool _focusedDirty;
    _Bool _titleDirty;
    _Bool _performLumDirty;
    _Bool _titleIdDirty;
    NSString *_title;
    long long _titleId;
    IDApplication *_application;
    id <IDViewDelegate> _delegate;
    long long _hmiState;
    long long _focusEvent;
    NSMutableSet *_widgets;
    IDModel *_titleModel;
    NSLock *_widgetsLock;
}

@property(readonly) NSLock *widgetsLock; // @synthesize widgetsLock=_widgetsLock;
@property(nonatomic) _Bool titleIdDirty; // @synthesize titleIdDirty=_titleIdDirty;
@property(nonatomic) _Bool performLumDirty; // @synthesize performLumDirty=_performLumDirty;
@property(nonatomic) _Bool titleDirty; // @synthesize titleDirty=_titleDirty;
@property(nonatomic) _Bool focusedDirty; // @synthesize focusedDirty=_focusedDirty;
@property(readonly, nonatomic) IDModel *titleModel; // @synthesize titleModel=_titleModel;
@property(readonly, nonatomic) NSMutableSet *widgets; // @synthesize widgets=_widgets;
@property(readonly, nonatomic) long long focusEvent; // @synthesize focusEvent=_focusEvent;
@property(nonatomic) long long hmiState; // @synthesize hmiState=_hmiState;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) __weak id <IDViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IDApplication *application; // @synthesize application=_application;
@property(nonatomic) long long titleId; // @synthesize titleId=_titleId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)visibleCallback:(id)arg1;
- (void)focusCallback:(id)arg1;
- (void)setNeedsFlush;
- (void)flush:(int)arg1;
- (int)priority;
- (void)performLastUserMode;
- (void)removeWidget:(id)arg1;
- (void)addWidget:(id)arg1;
- (void)hmiDidStopForApplication:(id)arg1;
- (void)hmiDidStartForApplication:(id)arg1;
- (id)initWithHmiState:(long long)arg1 titleModel:(id)arg2 focusEvent:(long long)arg3;

@end
