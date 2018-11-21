//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"
#import "SPTOfflineObserver-Protocol.h"

@class NSString, NSURL, SPTFreeTierAlbumOfflineModel;
@protocol EXP_HUBContentOperationDelegate, SPTOfflineManager;

@interface SPTFreeTierAlbumOfflineSwitchContentOperation : NSObject <SPTOfflineObserver, EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    NSURL *_entityURL;
    id <SPTOfflineManager> _offlineManager;
    SPTFreeTierAlbumOfflineModel *_offlineModel;
}

@property(retain, nonatomic) SPTFreeTierAlbumOfflineModel *offlineModel; // @synthesize offlineModel=_offlineModel;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineStateChangedForEntity:(id)arg1 withURL:(id)arg2;
- (void)updateOfflineStateForComponentBuilder:(id)arg1;
- (void)dealloc;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithEntityURL:(id)arg1 offlineManager:(id)arg2 offlineModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

