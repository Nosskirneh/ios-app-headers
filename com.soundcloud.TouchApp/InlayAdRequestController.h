//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StorageRequestControllerRACProtocol-Protocol.h"

@class AnalyticsInlayAdTagger, NSArray, NSMutableDictionary, NSString;
@protocol StorageRequestControllerRACProtocol;

@interface InlayAdRequestController : NSObject <StorageRequestControllerRACProtocol>
{
    id <StorageRequestControllerRACProtocol> _requestController;
    NSArray *_streamWithAds;
    AnalyticsInlayAdTagger *_inlayAppInstallAdTagger;
    unsigned long long _pageCount;
    NSMutableDictionary *_inlayAdsByIndexPath;
}

@property(retain, nonatomic) NSMutableDictionary *inlayAdsByIndexPath; // @synthesize inlayAdsByIndexPath=_inlayAdsByIndexPath;
@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) AnalyticsInlayAdTagger *inlayAppInstallAdTagger; // @synthesize inlayAppInstallAdTagger=_inlayAppInstallAdTagger;
@property(retain, nonatomic) NSArray *streamWithAds; // @synthesize streamWithAds=_streamWithAds;
@property(readonly, nonatomic) id <StorageRequestControllerRACProtocol> requestController; // @synthesize requestController=_requestController;
- (void).cxx_destruct;
- (void)reloadData;
- (void)loadAds:(id)arg1 pageCount:(unsigned long long)arg2;
- (id)retrieveStreamItems;
- (id)fetchFirst;
- (id)arrayWithStreamItems:(id)arg1 ads:(id)arg2;
- (id)fetchAll;
- (id)fetch;
- (unsigned long long)count;
- (id)entityAtIndex:(unsigned long long)arg1;
- (id)initWithRequestController:(id)arg1 inlayAds:(id)arg2 inlayAppInstallAdTagger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

