//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTAudioPreviewModel;

@protocol SPTAudioPreviewModelFactory <NSObject>
- (id <SPTAudioPreviewModel>)createAudioPreviewModel:(NSString *)arg1 trackURI:(NSURL *)arg2 creationType:(long long)arg3;
@end

