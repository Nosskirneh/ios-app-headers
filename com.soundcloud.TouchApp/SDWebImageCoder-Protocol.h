//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, UIImage;

@protocol SDWebImageCoder <NSObject>
- (NSData *)encodedDataWithImage:(UIImage *)arg1 format:(long long)arg2;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (UIImage *)decompressedImageWithImage:(UIImage *)arg1 data:(id *)arg2 options:(NSDictionary *)arg3;
- (UIImage *)decodedImageWithData:(NSData *)arg1;
- (_Bool)canDecodeFromData:(NSData *)arg1;
@end

