//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTArtistAboutHubComponentFactory;

@interface SPTFreeTierArtistHubComponentsFactory : NSObject
{
    id <SPTArtistAboutHubComponentFactory> _aboutHubComponentFactory;
}

@property(retain, nonatomic) id <SPTArtistAboutHubComponentFactory> aboutHubComponentFactory; // @synthesize aboutHubComponentFactory=_aboutHubComponentFactory;
- (void).cxx_destruct;
- (id)createComponentsWithBaseTheme:(id)arg1;
- (id)initWithArtistAboutHubComponentFactory:(id)arg1;

@end

