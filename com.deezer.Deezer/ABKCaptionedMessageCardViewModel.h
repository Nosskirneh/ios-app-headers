//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABKCardViewModel.h"

@interface ABKCaptionedMessageCardViewModel : ABKCardViewModel
{
    double _labelWidth;
    double _imageHeight;
    double _titleHeight;
    double _descriptionHeight;
    double _linkHeight;
    double _imageRatio;
}

@property double imageRatio; // @synthesize imageRatio=_imageRatio;
@property double linkHeight; // @synthesize linkHeight=_linkHeight;
@property double descriptionHeight; // @synthesize descriptionHeight=_descriptionHeight;
@property double titleHeight; // @synthesize titleHeight=_titleHeight;
@property double imageHeight; // @synthesize imageHeight=_imageHeight;
@property double labelWidth; // @synthesize labelWidth=_labelWidth;
- (_Bool)updateImageRatio:(double)arg1;
- (double)cardHeightWithWidth:(double)arg1;
@property(readonly) _Bool hasImage;
- (void)associateWithCell:(id)arg1;
- (id)initWithCard:(id)arg1;

@end

