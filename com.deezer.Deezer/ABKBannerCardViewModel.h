//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKCardViewModel.h"

@interface ABKBannerCardViewModel : ABKCardViewModel
{
    double _imageRatio;
}

@property double imageRatio; // @synthesize imageRatio=_imageRatio;
- (_Bool)updateImageRatio:(double)arg1;
- (double)cardHeightWithWidth:(double)arg1;
- (void)associateWithCell:(id)arg1;
- (id)initWithCard:(id)arg1;

@end

