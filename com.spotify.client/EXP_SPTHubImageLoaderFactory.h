//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBImageLoaderFactory.h"

@interface EXP_SPTHubImageLoaderFactory : NSObject <EXP_HUBImageLoaderFactory>
{
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <EXP_SPTHubImageLoadingLogger> _logger;
}

@property(readonly, nonatomic) id <EXP_SPTHubImageLoadingLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
- (void).cxx_destruct;
- (id)createImageLoader;
- (id)initWithImageLoaderFactory:(id)arg1 logger:(id)arg2;

@end

