//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol YTPhotoUploadObserverDelegate <NSObject>

@optional
- (void)didEndBannerPhotoUploadWithStatus:(long long)arg1 image:(UIImage *)arg2;
- (void)didBeginBannerPhotoUpload;
- (void)didEndAvatarPhotoUploadWithStatus:(long long)arg1 image:(UIImage *)arg2;
- (void)didBeginAvatarPhotoUpload;
@end

