//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@interface NativeHomeLoader : ContentSectionLoader
{
    _Bool _isUserRefresh;
    long long _apiVersion;
    long long _selectedSegmentIndex;
}

@property long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property _Bool isUserRefresh; // @synthesize isUserRefresh=_isUserRefresh;
@property long long apiVersion; // @synthesize apiVersion=_apiVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)saveDictionaryForTVTopShelf:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)resetSectionsRefreshDates;
- (_Bool)didHandleParsingData:(id)arg1;
- (_Bool)informDelegateLoadingFinished;
- (_Bool)informDelegateLoadingFailed:(id)arg1;
- (void)informLoadingDoneWithSuccess:(_Bool)arg1 willRetry:(_Bool)arg2;
- (id)apiVerson;
- (id)requestParams;
- (id)actionString;
- (int)type;

@end

