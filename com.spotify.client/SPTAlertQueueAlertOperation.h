//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAlertQueueOperation-Protocol.h"

@class FBKVOController, NSString;
@protocol SPTAlert, SPTAlertQueuePresenter;

@interface SPTAlertQueueAlertOperation : NSObject <SPTAlertQueueOperation>
{
    id <SPTAlert> _alert;
    FBKVOController *_KVOController;
    CDUnknownBlockType _completionHandler;
    id <SPTAlertQueuePresenter> _presenter;
}

@property(retain, nonatomic) id <SPTAlertQueuePresenter> presenter; // @synthesize presenter=_presenter;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(readonly, nonatomic) id <SPTAlert> alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (id)createUIAlertActionForAction:(id)arg1;
- (id)createUIAlertController;
- (void)complete;
- (void)dismiss;
- (void)cancel;
- (void)performWithPresenter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

