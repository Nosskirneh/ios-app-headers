//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIMMe, MLVideo, YTIPlayerResponse;
@protocol MLCaptionDisplayController, MLPlayerConfig;

@protocol MLCaptionDisplayControllerFactory <NSObject>
+ (id)new;
+ (id)alloc;
@property(nonatomic) __weak GIMMe *gimme;
- (id <MLCaptionDisplayController>)captionDisplayControllerForVideo:(MLVideo *)arg1 playerConfig:(id <MLPlayerConfig>)arg2;
- (id <MLCaptionDisplayController>)captionDisplayControllerForPlayerData:(YTIPlayerResponse *)arg1 playerConfig:(id <MLPlayerConfig>)arg2;
@end

