//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TrendingMusicStorageRequestFactory;

@interface TrendingMusicFetcherFactory : NSObject
{
    TrendingMusicStorageRequestFactory *_requestFactory;
}

@property(readonly, nonatomic) TrendingMusicStorageRequestFactory *requestFactory; // @synthesize requestFactory=_requestFactory;
- (void).cxx_destruct;
- (id)feed;
- (id)initWithRequestFactory:(id)arg1;
- (id)init;

@end

