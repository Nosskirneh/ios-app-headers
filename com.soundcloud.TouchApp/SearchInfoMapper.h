//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ServiceObjectMapper-Protocol.h"

@class NSString;

@interface SearchInfoMapper : NSObject <ServiceObjectMapper>
{
    long long _searchResultsType;
}

@property(readonly, nonatomic) long long searchResultsType; // @synthesize searchResultsType=_searchResultsType;
- (id)keyWithTierPrefix:(id)arg1;
- (id)mapFromDictionary:(id)arg1;
- (id)initWithSearchResultsType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

