//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSKLanguageComponents : NSObject
{
    NSString *_language;
    NSString *_script;
    NSString *_country;
}

+ (id)componentsWithString:(id)arg1;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *script; // @synthesize script=_script;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1;

@end

