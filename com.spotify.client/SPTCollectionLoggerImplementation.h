//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTCollectionLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTCollectionLoggerImplementation : NSObject <SPTCollectionLogger>
{
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
}

@property(readonly, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logListItemDisplayedOnPageURI:(id)arg1 flatIndex:(unsigned long long)arg2 targetURL:(id)arg3;
- (void)logCollectionUserIntent:(unsigned long long)arg1 feature:(id)arg2 pageURI:(id)arg3 targetURI:(id)arg4;
- (void)logPodcastEmptyStateForwardNavigationWithPageURI:(id)arg1;
- (void)logTabSelectedAtIndex:(unsigned long long)arg1 withPageURI:(id)arg2;
- (void)logDownloadInteractionSource:(id)arg1 downloadURI:(id)arg2 elementType:(unsigned long long)arg3 requestedDownload:(_Bool)arg4;
- (void)logUIImpressionWithFeatureId:(id)arg1 pageURI:(id)arg2 identifier:(id)arg3 impressionType:(id)arg4;
- (void)logUIImpressionOnPageURI:(id)arg1 identifier:(id)arg2 impressionType:(id)arg3;
- (void)logUIInteractionWithFeatureId:(id)arg1 pageURI:(id)arg2 sectionId:(id)arg3 itemIndex:(long long)arg4 targetURI:(id)arg5 interactionType:(id)arg6 userIntent:(id)arg7;
- (void)logUIInteractionOnPageURI:(id)arg1 sectionId:(id)arg2 itemIndex:(long long)arg3 targetURI:(id)arg4 interactionType:(id)arg5 userIntent:(id)arg6;
- (void)logUIInteractionUserIntent:(id)arg1 pageURI:(id)arg2 interactionType:(id)arg3;
- (void)logAlertOnPageURI:(id)arg1 alertId:(id)arg2;
- (void)logButtonInteractionOnPageURI:(id)arg1 buttonId:(id)arg2 targetURL:(id)arg3 intent:(id)arg4;
- (void)logEditModeChangedOnPageURI:(id)arg1 editMode:(_Bool)arg2;
- (void)logListItemInteraction:(id)arg1 onPageURI:(id)arg2 flatIndex:(unsigned long long)arg3 targetURL:(id)arg4;
- (void)logListItemSelectedWithFeatureId:(id)arg1 pageURI:(id)arg2 flatIndex:(unsigned long long)arg3 targetURL:(id)arg4;
- (void)logListItemSelectedOnPageURI:(id)arg1 flatIndex:(unsigned long long)arg2 targetURL:(id)arg3;
- (void)logSortingOnPageURI:(id)arg1 sorting:(unsigned long long)arg2;
- (void)logFilterResetOnPageURI:(id)arg1;
- (void)logFilterSetOnPageURI:(id)arg1 filter:(unsigned long long)arg2;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

