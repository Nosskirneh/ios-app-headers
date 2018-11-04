//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDataLoaderFactory, SPTLoginTheme, SPTRecoverAccountLoggerFactory;

@interface SPTRecoverAccountConfiguration : NSObject
{
    SPTLoginTheme *_theme;
    SPTRecoverAccountLoggerFactory *_loggerFactory;
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTRecoverAccountLoggerFactory *loggerFactory; // @synthesize loggerFactory=_loggerFactory;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)provideDataLoader;
- (id)initWithTheme:(id)arg1 dataLoaderFactory:(id)arg2 loggerFactory:(id)arg3;

@end
