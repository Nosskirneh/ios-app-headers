//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface VideoAdSource : NSObject
{
    // Error parsing type: , name: videoAdSourceModel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithBitrate:(id)arg1 height:(id)arg2 width:(id)arg3 type:(id)arg4 url:(id)arg5;
@property(nonatomic, readonly) NSURL *streamUrl;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, readonly) NSNumber *width;
@property(nonatomic, readonly) NSNumber *height;
@property(nonatomic, readonly) NSNumber *bitrate;

@end

