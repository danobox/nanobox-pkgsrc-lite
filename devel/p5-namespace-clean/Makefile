# $NetBSD: Makefile,v 1.25 2017/06/05 14:23:54 ryoon Exp $

DISTNAME=	namespace-clean-0.27
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=namespace/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/namespace-clean/
COMMENT=	Perl module to keep imports and functions out of your namespace
LICENSE=	${PERL5_LICENSE}

USE_LANGUAGES=		# empty

DEPENDS+=	p5-B-Hooks-EndOfScope>=0.12:../../devel/p5-B-Hooks-EndOfScope
DEPENDS+=	p5-Package-Stash>=0.23:../../devel/p5-Package-Stash
DEPENDS+=	p5-Module-Implementation-[0-9]*:../../devel/p5-Module-Implementation

#BUILD_DEPENDS+=	{perl>=5.10.1,p5-Test-Simple>=0.88}:../../devel/p5-Test-Simple

PERL5_PACKLIST=		auto/namespace/clean/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
