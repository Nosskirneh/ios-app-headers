//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class HNKCacheFormat;

@interface UIImageView (Haneke)
- (void)setHnk_fetcher:(id)arg1;
- (id)hnk_fetcher;
- (_Bool)hnk_shouldCancelForKey:(id)arg1;
- (void)hnk_setImage:(id)arg1 animated:(_Bool)arg2 success:(CDUnknownBlockType)arg3;
- (_Bool)hnk_fetchImageForFetcher:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)hnk_cancelSetImage;
@property(retain, nonatomic) HNKCacheFormat *hnk_cacheFormat;
- (void)hnk_setImageFromFetcher:(id)arg1 placeholder:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)hnk_setImageFromFetcher:(id)arg1 placeholder:(id)arg2;
- (void)hnk_setImageFromFetcher:(id)arg1;
- (void)hnk_setImage:(id)arg1 withKey:(id)arg2 placeholder:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)hnk_setImage:(id)arg1 withKey:(id)arg2 placeholder:(id)arg3;
- (void)hnk_setImage:(id)arg1 withKey:(id)arg2;
- (void)hnk_setImageFromURL:(id)arg1 placeholder:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)hnk_setImageFromURL:(id)arg1 placeholder:(id)arg2;
- (void)hnk_setImageFromURL:(id)arg1;
- (void)hnk_setImageFromFile:(id)arg1 placeholder:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)hnk_setImageFromFile:(id)arg1 placeholder:(id)arg2;
- (void)hnk_setImageFromFile:(id)arg1;
@end

