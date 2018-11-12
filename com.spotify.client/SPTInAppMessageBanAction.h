//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTInAppMessageAction-Protocol.h"

@class FollowModel, NSString, NSURL;
@protocol SPTCollectionPlatform, SPTFollowModelFactory;

@interface SPTInAppMessageBanAction : NSObject <SPTInAppMessageAction>
{
    NSURL *_url;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFollowModelFactory> _followModelFactory;
    FollowModel *_followModel;
}

@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)perform;
- (id)initWithURL:(id)arg1 collectionPlatform:(id)arg2 followModelFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

