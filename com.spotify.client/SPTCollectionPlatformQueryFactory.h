//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, SPTCollectionPlatformFetchOptions;

@interface SPTCollectionPlatformQueryFactory : NSObject
{
    NSURL *_baseURL;
    SPTCollectionPlatformFetchOptions *_fetchOptions;
}

+ (id)buildFilterOptions:(id)arg1;
+ (id)buildSortOptions:(id)arg1;
+ (id)factoryForBaseURL:(id)arg1;
@property(copy, nonatomic) SPTCollectionPlatformFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)build;
- (id)applyFetchOptions:(id)arg1;
- (id)initWithBaseURL:(id)arg1;

@end

