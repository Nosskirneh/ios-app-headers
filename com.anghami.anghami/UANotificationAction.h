//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UANotificationAction : NSObject
{
    NSString *_identifier;
    NSString *_title;
    unsigned long long _options;
}

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToUNNotificationAction:(id)arg1;
- (_Bool)isEqualToUIUserNotificationAction:(id)arg1;
- (id)asUNNotificationAction;
- (id)asUIUserNotificationAction;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3;

@end

