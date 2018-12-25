//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIMMe, MLFormat3Captions;
@protocol MLCaptionDisplaySettingsProvider, MLCaptionTrack;

@protocol MLCaptionDisplayController <NSObject>
+ (id)new;
+ (id)alloc;
@property(retain, nonatomic) id <MLCaptionDisplaySettingsProvider> captionDisplaySettingsProvider;
@property(nonatomic) __weak GIMMe *gimme;
- (void)setCaptionTrack:(id <MLCaptionTrack>)arg1;
- (void)addFormat3Captions:(MLFormat3Captions *)arg1;
- (void)clearCaptions;
- (void)setCurrentMediaTime:(CDStruct_d60ef703)arg1;
- (void)setCaptionsHidden:(_Bool)arg1;
@end

