//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTProfileDelegate-Protocol.h"

@class BTTracker, NSArray, NSString;
@protocol TV4BurtManagerDelegate;

@interface TV4BurtManager : NSObject <BTProfileDelegate>
{
    BTTracker *_tracker;
    NSString *_masterId;
    id <TV4BurtManagerDelegate> _delegate;
    NSArray *_segments;
}

+ (id)logArea;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(nonatomic) __weak id <TV4BurtManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendDataWithPage:(id)arg1 tags:(id)arg2 videoContent:(id)arg3;
- (id)getStringifiedJsonForObject:(id)arg1;
- (id)getTypeFromAsset:(id)arg1;
- (id)createNidFromTitle:(id)arg1;
- (id)createContentValueFromAsset:(id)arg1;
- (id)createUserValue;
- (id)getDefaultTagsForPage:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)profile:(id)arg1 belongsToSegments:(id)arg2;
- (void)trackPlayVideoAsset:(id)arg1 withPage:(id)arg2;
- (void)trackPageview:(id)arg1;
- (void)initiate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
