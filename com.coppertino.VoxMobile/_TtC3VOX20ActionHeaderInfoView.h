//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface _TtC3VOX20ActionHeaderInfoView : UIView
{
    // Error parsing type: , name: firstString
    // Error parsing type: , name: secondString
    // Error parsing type: , name: thirdString
    // Error parsing type: , name: artworkImageURLString
    // Error parsing type: , name: artworkDidTapHandler
    // Error parsing type: , name: showRadioArtwork
    // Error parsing type: , name: firstLabel
    // Error parsing type: , name: secondLabel
    // Error parsing type: , name: thirdLabel
    // Error parsing type: , name: artworkImageView
    // Error parsing type: , name: artworkActionButton
}

+ (id)actionHeaderViewWithCollection:(id)arg1 artworkTapHandler:(CDUnknownBlockType)arg2;
+ (id)actionHeaderViewWithTrack:(id)arg1 artworkTapHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (void)artworkDidTap;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool showRadioArtwork; // @synthesize showRadioArtwork;
@property(nonatomic, copy) CDUnknownBlockType artworkDidTapHandler; // @synthesize artworkDidTapHandler;
@property(nonatomic, copy) NSString *artworkImageURLString; // @synthesize artworkImageURLString;
@property(nonatomic, copy) NSString *thirdString; // @synthesize thirdString;
@property(nonatomic, copy) NSString *secondString; // @synthesize secondString;
@property(nonatomic, copy) NSString *firstString; // @synthesize firstString;

@end

