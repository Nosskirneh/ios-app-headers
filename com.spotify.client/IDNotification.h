//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IDNotification : NSObject
{
    long long _index;
    NSString *_title;
    NSString *_text;
}

+ (id)new;
@property(readonly) NSString *text; // @synthesize text=_text;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)propertyDescription;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToNotification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIndex:(long long)arg1 title:(id)arg2 text:(id)arg3;

@end

