//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (ClassName)
- (id)NSTN_getIvarNamed:(id)arg1;
- (id)NSTN_ivars;
- (id)parseMethods:(struct objc_method **)arg1 count:(unsigned int)arg2 listIsClassMethods:(_Bool)arg3;
- (id)parseMethodsRaw:(struct objc_method **)arg1 count:(unsigned int)arg2 listIsClassMethods:(_Bool)arg3;
- (id)NSTN_methodsRaw;
- (id)NSTN_methods;
- (id)parsePrimitiveProperty:(id)arg1 typesDict:(id)arg2;
- (id)parseObjectProperty:(id)arg1 typesDict:(id)arg2;
- (id)parseAttributeString:(id)arg1 typesDict:(id)arg2 withFoundString:(id)arg3 isClass:(_Bool)arg4;
- (id)decodeDataType:(id)arg1;
- (id)propertyReturnTypes;
- (id)propertyEncodingDictionary;
- (id)propertiesRaw:(id)arg1;
- (id)NSTN_properties;
- (id)NSTN_className;
- (id)getValue:(id)arg1 fromDictionary:(id)arg2;
@end
