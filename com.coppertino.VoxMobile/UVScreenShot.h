//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface UVScreenShot : NSObject
{
    UIImage *Image;
    UIImage *AdditionalImage;
    double TimeTaken;
    struct CGRect AdditionalImageRect;
}

@property(nonatomic) double TimeTaken; // @synthesize TimeTaken;
@property struct CGRect AdditionalImageRect; // @synthesize AdditionalImageRect;
@property(retain, nonatomic) UIImage *AdditionalImage; // @synthesize AdditionalImage;
@property(retain, nonatomic) UIImage *Image; // @synthesize Image;
- (void).cxx_destruct;

@end

