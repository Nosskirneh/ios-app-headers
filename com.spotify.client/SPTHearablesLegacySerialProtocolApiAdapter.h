//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHearablesSpotifyGoAPI;

@interface SPTHearablesLegacySerialProtocolApiAdapter : NSObject
{
    id <SPTHearablesSpotifyGoAPI> _adaptee;
}

@property(retain, nonatomic) id <SPTHearablesSpotifyGoAPI> adaptee; // @synthesize adaptee=_adaptee;
- (void).cxx_destruct;
- (id)parseData:(id)arg1;
- (id)executeMessage:(id)arg1;
- (id)initWithImplementation:(id)arg1;

@end

