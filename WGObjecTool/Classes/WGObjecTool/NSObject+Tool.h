
//  Copyright © 2019 WG. All rights reserved.

#import <Foundation/Foundation.h>

@interface NSObject (Tool)
@property(nonatomic,strong)NSString *toString;

/* 获取对象的所有属性和属性内容 */
- (NSDictionary *)getAllPropertiesAndVaules;
/* 获取对象的所有属性 */
- (NSArray *)getAllProperties;
/* 获取对象的所有方法 */
-(void)getAllMethods;
@end
