//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class UIImage;

@interface OfflineCoverOperation : NSOperation
{
    int _coverType;
    UIImage *_cover;
    UIImage *_offlineCover;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) int coverType; // @synthesize coverType=_coverType;
@property(retain, nonatomic) UIImage *offlineCover; // @synthesize offlineCover=_offlineCover;
@property(retain, nonatomic) UIImage *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)main;

@end

