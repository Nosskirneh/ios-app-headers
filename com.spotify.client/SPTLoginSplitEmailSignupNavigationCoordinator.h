//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTLoginNavigationCoordinator-Protocol.h"

@class NSArray, NSString;

@interface SPTLoginSplitEmailSignupNavigationCoordinator : NSObject <SPTLoginNavigationCoordinator>
{
    NSArray *_pageSequence;
}

@property(readonly, nonatomic) NSArray *pageSequence; // @synthesize pageSequence=_pageSequence;
- (void).cxx_destruct;
- (id)buildPageSequenceFromTestManager:(id)arg1;
- (id)nextPageURIFromCurrent:(id)arg1;
- (id)initialPageURI;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

