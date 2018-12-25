//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, NSURL;

@interface SUPBaseHelpUnit : NSObject <NSCoding>
{
    long long _type;
    NSString *_title;
    NSURL *_URL;
    NSString *_autocompleteQuery;
}

+ (id)contentListForHelpUnitList:(id)arg1;
@property(copy, nonatomic) NSString *autocompleteQuery; // @synthesize autocompleteQuery=_autocompleteQuery;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isValid;
- (id)initBaseWithSuggestionProto:(id)arg1;
- (id)initBaseWithMojoJSON:(id)arg1;

@end
