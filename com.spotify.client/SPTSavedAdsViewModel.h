//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSMutableArray, NSString, SPTDataLoader;
@protocol SPTLogCenter, SPTSavedAdsViewModelDelegate;

@interface SPTSavedAdsViewModel : NSObject <SPTDataLoaderDelegate>
{
    id <SPTSavedAdsViewModelDelegate> _delegate;
    id <SPTLogCenter> _logCenter;
    SPTDataLoader *_dataLoader;
    NSMutableArray *_savedAds;
}

@property(retain, nonatomic) NSMutableArray *savedAds; // @synthesize savedAds=_savedAds;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTSavedAdsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)requestURLToDeleteBookmarkedAdWithIdentifier:(id)arg1;
- (id)requestURLToGetSavedAds;
- (void)loadSavedAds;
- (id)savedAdAtIndex:(long long)arg1;
- (void)removeSavedAdAtIndex:(long long)arg1;
- (unsigned long long)numberOfSavedAds;
- (id)initWithLogCenter:(id)arg1 dataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

