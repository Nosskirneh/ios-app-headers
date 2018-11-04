//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, NSURL, SPTDataLoader;

@interface SPTPodcastFindViewModelLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTPodcastFindViewModelDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    NSURL *_endpoint;
    id <SPTDataLoaderCancellationToken> _currentRequestCancellationToken;
}

@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> currentRequestCancellationToken; // @synthesize currentRequestCancellationToken=_currentRequestCancellationToken;
@property(retain, nonatomic) NSURL *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTPodcastFindViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancel;
- (void)loadViewModel;
- (id)initWithDataLoader:(id)arg1 endpoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

