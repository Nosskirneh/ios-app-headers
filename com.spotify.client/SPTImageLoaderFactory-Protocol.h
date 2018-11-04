//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTImageLoaderFactory <NSObject>
- (void)unregisterImageRequestFactories;
- (void)registerImageRequestFactory:(id <SPTImageLoaderRequestFactory>)arg1 predicate:(_Bool (^)(NSURL *))arg2;
- (id <SPTImageLoader>)createImageLoader;
@end

