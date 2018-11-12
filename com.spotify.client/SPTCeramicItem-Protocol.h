//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImage;
@protocol NSCoding;

@protocol SPTCeramicItem <NSObject>
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (UIImage *)placeholderImageForSize:(long long)arg1;

@optional
@property(readonly, nonatomic) id <NSCoding> loggingData;
@end

