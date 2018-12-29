//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRTimelineDataSource-Protocol.h"

@class NSString, TWTRAPIClient;

@interface TWTRListTimelineDataSource : NSObject <TWTRTimelineDataSource>
{
    _Bool _includeRetweets;
    TWTRAPIClient *_APIClient;
    NSString *_listID;
    NSString *_listSlug;
    NSString *_listOwnerScreenName;
    unsigned long long _maxTweetsPerRequest;
}

@property(readonly, nonatomic) _Bool includeRetweets; // @synthesize includeRetweets=_includeRetweets;
@property(readonly, nonatomic) unsigned long long maxTweetsPerRequest; // @synthesize maxTweetsPerRequest=_maxTweetsPerRequest;
@property(readonly, copy, nonatomic) NSString *listOwnerScreenName; // @synthesize listOwnerScreenName=_listOwnerScreenName;
@property(readonly, copy, nonatomic) NSString *listSlug; // @synthesize listSlug=_listSlug;
@property(readonly, copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(retain, nonatomic) TWTRAPIClient *APIClient; // @synthesize APIClient=_APIClient;
- (void).cxx_destruct;
- (id)queryParametersWithMaxPosition:(id)arg1;
@property(readonly, nonatomic) unsigned long long timelineType;
- (void)loadPreviousTweetsBeforePosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithListID:(id)arg1 listSlug:(id)arg2 listOwnerScreenName:(id)arg3 APIClient:(id)arg4 maxTweetsPerRequest:(unsigned long long)arg5 includeRetweets:(_Bool)arg6;
- (id)initWithListSlug:(id)arg1 listOwnerScreenName:(id)arg2 APIClient:(id)arg3;
- (id)initWithListID:(id)arg1 APIClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

