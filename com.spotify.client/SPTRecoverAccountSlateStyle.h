//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface SPTRecoverAccountSlateStyle : NSObject
{
    double _width;
    double _widthIPad;
    double _aspectRatio;
    double _cornerRadius;
    UIColor *_backgroundColor;
}

@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) double widthIPad; // @synthesize widthIPad=_widthIPad;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)initWithWidth:(double)arg1 widthIPad:(double)arg2 aspectRatio:(double)arg3 cornerRadius:(double)arg4 backgroundColor:(id)arg5;

@end

