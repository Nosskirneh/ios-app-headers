//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPCPromise.h"

@class GIPNetworkImage;

@interface GKSNetworkImagePromise : GPCPromise
{
    GIPNetworkImage *_networkImage;
}

- (void).cxx_destruct;
- (void)thumbnailFetchDidFail:(id)arg1;
- (void)thumbnailFetchDidSucceed:(id)arg1;
- (void)dealloc;
- (id)initWithNetworkImage:(id)arg1;

@end
