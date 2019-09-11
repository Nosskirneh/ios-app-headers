//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FollowModelObserver-Protocol.h"
#import "HUBContentOperation-Protocol.h"

@class FollowModel, NSString, NSURL;
@protocol HUBContentOperationDelegate, SPTFollowModelFactory;

@interface SPTFreeTierArtistBannedTracksContentOperation : NSObject <HUBContentOperation, FollowModelObserver>
{
    id <HUBContentOperationDelegate> delegate;
    id <SPTFollowModelFactory> _followModelFactory;
    NSURL *_viewURI;
    FollowModel *_followModel;
}

@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithFollowModelFactory:(id)arg1 viewURI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

