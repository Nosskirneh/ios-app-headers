//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTImageLoader;

@interface SPTCeramicBackgroundViewDecorator : NSObject
{
    id <SPTImageLoader> _imageLoader;
}

@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)loadBackgroundImageForBlockView:(id)arg1 block:(id)arg2;
- (id)initWithImageLoader:(id)arg1;

@end

