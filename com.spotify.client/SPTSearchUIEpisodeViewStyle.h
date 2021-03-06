//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GLUETrackAccessoryLabelStyle, SPTSearchUIChipViewStyle, UIColor, UIFont;

@interface SPTSearchUIEpisodeViewStyle : NSObject <NSCopying>
{
    UIColor *_backgroundColor;
    double _cornerRadius;
    double _imageCornerRadius;
    double _spacing;
    SPTSearchUIChipViewStyle *_chipViewStyle;
    unsigned long long _titleNumberOfLines;
    unsigned long long _subtitleNumberOfLines;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    GLUETrackAccessoryLabelStyle *_accessoryLabelStyle;
    struct CGSize _imageSize;
    struct UIEdgeInsets _contentInsets;
}

@property(copy, nonatomic) GLUETrackAccessoryLabelStyle *accessoryLabelStyle; // @synthesize accessoryLabelStyle=_accessoryLabelStyle;
@property(copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) unsigned long long subtitleNumberOfLines; // @synthesize subtitleNumberOfLines=_subtitleNumberOfLines;
@property(nonatomic) unsigned long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(copy, nonatomic) SPTSearchUIChipViewStyle *chipViewStyle; // @synthesize chipViewStyle=_chipViewStyle;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqualToEpisodeViewStyle:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2 imageCornerRadius:(double)arg3 imageSize:(struct CGSize)arg4 contentInsets:(struct UIEdgeInsets)arg5 spacing:(double)arg6 chipViewStyle:(id)arg7 titleNumberOfLines:(unsigned long long)arg8 subtitleNumberOfLines:(unsigned long long)arg9 titleFont:(id)arg10 subtitleFont:(id)arg11 titleColor:(id)arg12 subtitleColor:(id)arg13 accessoryLabelStyle:(id)arg14;
- (id)initWithTheme:(id)arg1;

@end

