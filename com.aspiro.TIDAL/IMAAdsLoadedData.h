//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMAAdsManager, IMAStreamManager;

@interface IMAAdsLoadedData : NSObject
{
    IMAAdsManager *_adsManager;
    IMAStreamManager *_streamManager;
    id _userContext;
}

@property(retain, nonatomic) id userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) IMAStreamManager *streamManager; // @synthesize streamManager=_streamManager;
@property(retain, nonatomic) IMAAdsManager *adsManager; // @synthesize adsManager=_adsManager;
- (void).cxx_destruct;

@end

