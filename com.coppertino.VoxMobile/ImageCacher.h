//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ImageCacher : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_cachesDirectory;
}

+ (id)shared;
@property(retain, nonatomic) NSString *cachesDirectory; // @synthesize cachesDirectory=_cachesDirectory;
- (void).cxx_destruct;
- (id)cachePathForMediaURL:(id)arg1;
- (id)cacheURLForModelArtwrok:(id)arg1;
- (_Bool)removeImageForMediaURL:(id)arg1;
- (id)saveImageAsync:(id)arg1 forMediaURL:(id)arg2;
- (id)saveImage:(id)arg1 forMediaURL:(id)arg2;
- (id)init;

@end

