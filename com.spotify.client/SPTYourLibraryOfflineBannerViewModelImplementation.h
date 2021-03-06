//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineSyncModelDelegate-Protocol.h"
#import "SPTYourLibraryOfflineBannerViewModel-Protocol.h"

@class NSString;
@protocol SPTOfflineSyncModel, SPTYourLibraryOfflineBannerViewModelDelegate;

@interface SPTYourLibraryOfflineBannerViewModelImplementation : NSObject <SPTOfflineSyncModelDelegate, SPTYourLibraryOfflineBannerViewModel>
{
    _Bool _loaded;
    float _percentCompleted;
    id <SPTYourLibraryOfflineBannerViewModelDelegate> _delegate;
    id <SPTOfflineSyncModel> _offlineSyncModel;
    unsigned long long _totalNumberOfItems;
    unsigned long long _numberOfCompletedItems;
}

@property(nonatomic) unsigned long long numberOfCompletedItems; // @synthesize numberOfCompletedItems=_numberOfCompletedItems;
@property(nonatomic) unsigned long long totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(retain, nonatomic) id <SPTOfflineSyncModel> offlineSyncModel; // @synthesize offlineSyncModel=_offlineSyncModel;
@property(nonatomic) float percentCompleted; // @synthesize percentCompleted=_percentCompleted;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) __weak id <SPTYourLibraryOfflineBannerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateProgress:(id)arg1;
- (void)offlineSyncModel:(id)arg1 error:(id)arg2;
- (void)offlineSyncModelDidUpdate:(id)arg1;
- (void)offlineSyncModelDidEndSyncing:(id)arg1;
- (void)offlineSyncModelDidBeginSyncing:(id)arg1;
@property(readonly, copy, nonatomic) NSString *downloadingDetails;
@property(readonly, copy, nonatomic) NSString *completedTitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)loadViewModel;
- (id)initWithOfflineSyncModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

