//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTTrackCreditsRoleModel : NSObject
{
    NSString *_title;
    NSArray *_artists;
}

@property(readonly, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)convertRoleTitle:(id)arg1;
- (void)setValuesFromDictionary:(id)arg1;
- (id)initWithRoleDictionary:(id)arg1;

@end

